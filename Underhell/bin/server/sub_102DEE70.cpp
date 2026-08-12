char __thiscall sub_102DEE70(int this)
{
  double v2; // st7
  unsigned int v3; // eax
  int v4; // eax
  char result; // al
  _BYTE *v6; // esi
  float v7; // [esp+Ch] [ebp-8h]

  if ( *(_BYTE *)(this + 2137) )
  {
    v7 = *(float *)(dword_106BB5BC + 44);
    v2 = (double)sub_100F5E70((_DWORD *)this) * v7;
  }
  else
  {
    v3 = *(_DWORD *)(this + 3512);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 1];
    v2 = sub_10135AA0(v4);
  }
  result = sub_100F8040(this, this, (int)v2, 0.2, 0);
  if ( result )
  {
    v6 = (_BYTE *)(this + 5088);
    if ( *v6 )
    {
      result = (**((int (__thiscall ***)(int, _BYTE *))v6 - 2))((int)(v6 - 8), v6);
      *v6 = 0;
    }
  }
  return result;
}
