#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "Record.h"

entry_t* create_entries(unsigned int num_entries)
{
    entry_t* entries;
    entries = (entry_t*)malloc(num_entries * sizeof(entry_t));
    return entries;
}

void* delete_entries(entry_t* entries)
{
    if (entries == NULL)
        return NULL;

    free(entries);
    return NULL;
}

records_t* create_records()
{
    records_t* records;
    records = (records_t*)malloc(sizeof(records_t));
    return records;
}

void fill_records(records_t* records, entry_t* entries, unsigned int length)
{
    if(entries == NULL || records == NULL)
        return;

    records->entries = entries;
    records->length = length;
}

void* delete_records(records_t* records)
{
    if (records == NULL)
        return NULL;

    delete_entries(records->entries);
    free(records);
    return NULL;
}

void print_records(records_t* records)
{
    if (records == NULL)
        return;

    printf("Record: \n");
    for(unsigned int i = 0; i < records->length; ++i)
    {
        printf("%c, %d\n", records->entries[i].letter, records->entries[i].value);
    }
    printf("\n");
}

void random_fill_records(records_t* records) // random durchgewüfelt 
{
    if (records == NULL)
        return;

    srand(time(NULL)); // Seed for the pseudo-random numbers 

    int lower_letter = 97; // 'a'
    int upper_letter = 122; // 'z'
    int lower_value = 0;
    int upper_value = 99;

    for(unsigned int i = 0; i < records->length; ++i)
    {
        char random_letter = (rand() % (upper_letter - lower_letter + 1)) + lower_letter;
        char random_value = (rand() % (upper_value - lower_value + 1)) + lower_value;

        records->entries[i].letter = random_letter;
        records->entries[i].value = random_value;
    }
}

int sort_ascending(const void* elem1, const void* elem2)
{
    entry_t* l = ((entry_t*) elem1);
    entry_t* r = ((entry_t*) elem2);

    if (l->value > r->value) 
        return 1;
    if (r->value > l->value) 
        return -1;
    else 
        return 0;
}

int sort_descending(const void* elem1, const void* elem2)
{
    entry_t* l = ((entry_t*) elem1);
    entry_t* r = ((entry_t*) elem2);

    if (l->value < r->value) 
        return 1;
    if (r->value < l->value) 
        return -1;
    else 
        return 0;
}

void sort_records(records_t* records, SortingScheme sorting_scheme)
{
    if (records == NULL)
        return;

    switch(sorting_scheme)
    {
        case SORT_ASCENDING: 
            qsort(records->entries, records->length, sizeof(entry_t), sort_ascending);
            break;
        case SORT_DESCENDING:
            qsort(records->entries, records->length, sizeof(entry_t), sort_descending);
            break;
        default:
            return;
    }
}