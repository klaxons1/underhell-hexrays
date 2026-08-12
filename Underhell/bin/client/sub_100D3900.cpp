char __thiscall sub_100D3900(int this)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-8h] BYREF
  int v6; // [esp+8h] [ebp-4h] BYREF

  LOBYTE(v2) = 0;
  if ( *(_BYTE *)(this + 185) )
  {
    if ( !*(_BYTE *)(this + 200) )
    {
      *(_BYTE *)(this + 200) = 1;
      *(_BYTE *)(this + 186) = 1;
      *(_BYTE *)(this + 184) = 1;
      sub_100D9830(&v6, &v5);
      v3 = v5;
      *(_DWORD *)(this + 212) = v6;
      *(_DWORD *)(this + 216) = v3;
      *(_DWORD *)(this + 204) = (int)(sub_100B3A10((float *)&dword_1042FB78) * (double)*(int *)(this + 212));
      v2 = (int)(sub_100B3A10((float *)&dword_1042FB78) * (double)*(int *)(this + 216));
      *(_DWORD *)(this + 208) = v2;
    }
  }
  else
  {
    *(_BYTE *)(this + 200) = 0;
    *(_BYTE *)(this + 186) = 0;
    *(_BYTE *)(this + 184) = 0;
  }
  return v2;
}
