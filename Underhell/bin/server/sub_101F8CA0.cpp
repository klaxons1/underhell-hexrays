float *__stdcall sub_101F8CA0(int a1, int a2)
{
  float *result; // eax
  int v3; // ebx
  int v4; // edi

  sub_10206470();
  *(_DWORD *)(a1 + 4120) = a2;
  sub_100E8600(a2);
  result = (float *)dword_106B31C8;
  dword_10697280 = a1;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v3 = 0;
    if ( *(int *)(a2 + 76) > 0 )
    {
      v4 = 0;
      do
      {
        result = (float *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(
                            dword_106B31D0,
                            *(_DWORD *)(v4 + *(_DWORD *)(a2 + 64)));
        if ( result
          || (result = (float *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
        {
          result = (float *)*((_DWORD *)result + 3);
          if ( result )
          {
            result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)result + 20))(result);
            if ( result )
            {
              result = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)result + 208))(result);
              if ( result )
                result = (float *)sub_100BCC70(
                                    result,
                                    *(float *)(*(_DWORD *)(a2 + 64) + v4 + 4),
                                    *(float *)(*(_DWORD *)(a2 + 64) + v4 + 8));
            }
          }
        }
        ++v3;
        v4 += 12;
      }
      while ( v3 < *(_DWORD *)(a2 + 76) );
    }
  }
  return result;
}
