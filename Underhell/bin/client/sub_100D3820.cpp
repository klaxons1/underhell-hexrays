void __thiscall sub_100D3820(int this)
{
  int v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st7
  int v6; // edx
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 185) )
  {
    if ( !*(_BYTE *)(this + 186) )
    {
      *(_BYTE *)(this + 186) = 1;
      *(_BYTE *)(this + 184) = 1;
      sub_100D9830(&v8, &v7);
      v2 = v7;
      *(_DWORD *)(this + 212) = v8;
      *(_DWORD *)(this + 216) = v2;
      v3 = sub_100B3A10((float *)&dword_1042FB78);
      if ( 0.0 == v3 )
      {
        v6 = *(_DWORD *)(this + 216);
        *(_DWORD *)(this + 204) = *(_DWORD *)(this + 212);
        *(_DWORD *)(this + 208) = v6;
      }
      else
      {
        v4 = (double)*(int *)(this + 212) * v3;
        v5 = v3 * (double)*(int *)(this + 216);
        *(_DWORD *)(this + 204) = (int)v4;
        *(_DWORD *)(this + 208) = (int)v5;
      }
    }
  }
  else
  {
    *(_BYTE *)(this + 186) = 0;
    *(_BYTE *)(this + 184) = 0;
  }
}
