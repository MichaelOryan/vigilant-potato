template <class T> void BubbleSortFront(T & t)
{
    bool swapped = true;
    for(auto wall = t.rbegin(); wall < t.rend() && swapped; ++wall)
    {
        swapped = false;
        for(auto iter = t.rend() - 1; iter != wall; --iter)
        {
            if(*iter > *(iter - 1))
            {
                std::swap(*iter, *(iter - 1));
                swapped = true;
            }
        }
    }
}


template <class T> void BubbleSortBack(T & t)
{
    bool swapped = true;
    for(auto wall = t.begin(); wall < t.end() && swapped; ++wall)
    {
        swapped = false;
        for(auto iter = t.end() - 1; iter != wall; --iter)
        {
            if(*iter < *(iter - 1))
            {
                std::swap(*iter, *(iter - 1));
                swapped = true;
            }
        }
    }
}
