     int top=0;
     int stack[10000];
     int is_empty()
     {
        if(top<0)
        {
            return true;
        }
        else
        {
            return false;
        }
     }
     int peek()
     {
        return stack[top];
     }
      void pop()
     {
         top--;
     }
     void push(int x)
     {
         top++;
         stack[top]=x;

     }


int largestRectangleArea(int* heights, int heightsSize)
{
        int maxa = INT_MIN,area;
        int i=0;
        while(i<heightsSize)
        {
            if(is_empty()||heights[peek()]<heights[i])
            {
                push(i);
                i++;
            }
            else
            {
                int t=peek();
                pop();
                if(is_empty())
                {
                    area=heights[t]*i;
                }
                else
                {
                    area=heights[t]*(i-peek()-1);
                }

            if(area>=maxa)
            {
            maxa=area;
            }
            }
        }
            while(!is_empty())
            {
                int t=peek();
                pop();
                if(is_empty())
                {
                    area=heights[t]*i;
                }
                else
                {
                    area=heights[t]*(i-peek()-1);
                }
            if(area>maxa)
            {
            maxa=area;
            }
            }

        return maxa;

}
