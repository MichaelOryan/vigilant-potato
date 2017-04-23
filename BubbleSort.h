template <class T> void BubbleSort(T & t)
{
    auto sorted = t.end();
    while( !(sorted == t.begin()) )
    {
        auto next = t.begin();
        next++;
        auto last_swapped = t.begin();
        auto current = t.begin();
        while( !(next == sorted) )
        {
            if(*next < *current)
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
