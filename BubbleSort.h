template <class T> void BubbleSort(T & begin, T & end)
{
    auto wall = end;
    while(wall != begin)
    {
        auto next = begin;
        next++;
        auto new_wall = begin;
        auto current = begin;
        while(next != wall)
        {
            if(*next < *current)
            {
                new_wall = next;
                std::swap(*iter, *next);
            }
            current++;
            next++;
        }
        
        wall = new_wall;
    }
}
