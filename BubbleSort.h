template <class T> void BubbleSort(T & t)
{
    auto sorted = t.end();
    while( !(sorted == t.begin()) )
    {
        auto next = t.begin();
        next++;
        auto possible_sorted = t.begin();
        auto current = t.begin();
        while( !(next == sorted) )
        {
            if(*next < *current)
            {
                possible_sorted = next;
                std::swap(*current, *next);
            }
            current++;
            next++;
        }
        sorted = possible_sorted;
    }
