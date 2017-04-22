template <class T> void BubbleSort(T & t)
{
    auto wall = t.end();
    while(wall != t.begin())
    {
        auto next = t.begin();
        next++;
        auto new_wall = t.begin();
        auto current = t.begin();
        while(next != wall)
        {
            if(*current > *next)
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
