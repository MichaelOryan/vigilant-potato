template <class T> void BubbleSortFront(T & t)
{
    auto wall = t.rbegin();
    while(wall < t.rend())
    {
        auto new_wall = wall;
        for(auto iter = t.rend() - 1; iter != wall; --iter)
        {
            if(*iter > *(iter - 1))
            {
                new_wall = iter - 1;
                std::swap(*iter, *(iter - 1));
            }
        }
        
        wall = new_wall;
    }
}


template <class T> void BubbleSortBack(T & t)
{
    auto wall = t.begin();
    while(wall < t.end())
    {
        auto new_wall = wall;
        for(auto iter = t.end() - 1; iter != wall; --iter)
        {
            if(*iter < *(iter - 1))
            {
                new_wall = iter - 1;
                std::swap(*iter, *(iter - 1));
            }
        }
        
        wall = new_wall;
    }
}
