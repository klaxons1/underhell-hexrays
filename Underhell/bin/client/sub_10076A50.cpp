double __cdecl sub_10076A50(_DWORD *a1, float a2, float a3)
{
  int v3; // edx
  double result; // st7
  double v5; // st6
  double v6; // st7
  double v7; // rt0
  __int16 v8; // ax
  double v9; // st7
  double v10; // st6
  _DWORD v11[2]; // [esp+0h] [ebp-Ch] BYREF
  float v12; // [esp+8h] [ebp-4h]

  v3 = a1[1];
  v11[0] = *a1;
  v12 = a2;
  v11[1] = v3;
  if ( ((**(int (__thiscall ***)(int, _DWORD *, _DWORD))dword_104131A0)(dword_104131A0, v11, 0) & 0x4030) == 0 )
    return a2;
  v12 = a3;
  result = a3;
  if ( ((**(int (__thiscall ***)(int, _DWORD *, _DWORD))dword_104131A0)(dword_104131A0, v11, 0) & 0x4030) == 0 )
  {
    v5 = a2;
    v6 = result - a2;
    if ( v6 > 1.0 )
    {
      while ( 1 )
      {
        v12 = v5 + v6 * 0.5;
        v8 = (**(int (__thiscall ***)(int, _DWORD *, _DWORD))dword_104131A0)(dword_104131A0, v11, 0);
        v9 = v12;
        if ( (v8 & 0x4030) != 0 )
        {
          a2 = v12;
        }
        else
        {
          a3 = v12;
          v9 = a2;
        }
        v10 = a3 - v9;
        if ( v10 <= 1.0 )
          break;
        v7 = v10;
        v5 = v9;
        v6 = v7;
      }
      return v12;
    }
    else
    {
      return v12;
    }
  }
  return result;
}
