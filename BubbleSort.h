template <class T> void BubbleSort(const T & begin, const T & end, bool reverse = false)
{
    auto sorted = end;
    while( !(sorted == begin) )
    {
        auto next = begin;
        next++;
        auto last_swapped = begin;
        auto current = begin;
        while( !(next == sorted) )
        {
            if(reverse ^ (*next < *current) )
            {
                last_swapped = next;
                std::swap(*current, *next);
            }
            current++;
            next++;
        }
        sorted = last_swapped;
    }
}

