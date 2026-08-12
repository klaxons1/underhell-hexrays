_DWORD *__stdcall sub_100D1870(char a1, char a2, char a3, char a4, _DWORD *a5, _DWORD *a6, _DWORD *a7, _DWORD *a8)
{
  _DWORD *result; // eax

  result = a5;
  *a5 = 255;
  *a6 = 255;
  *a7 = 255;
  *a8 = 255;
  if ( a1 )
  {
    if ( a2 )
    {
      *a5 = 180;
      *a6 = 180;
      *a7 = 225;
    }
    else
    {
      *a5 = 150;
      *a6 = 180;
      *a7 = 150;
    }
  }
  if ( a3 )
  {
    if ( a4 )
    {
      *a5 = 255;
      *a6 = 255;
      *a7 = 0;
      *a8 = 255;
    }
    else
    {
      if ( a1 )
      {
        *a5 = 255;
        *a6 = 0;
        *a7 = 0;
      }
      else
      {
        *a5 = 180;
        *a6 = 180;
        *a7 = 100;
      }
      *a8 = 255;
    }
  }
  return result;
}
