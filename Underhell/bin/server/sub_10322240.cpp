void __thiscall sub_10322240(float *this)
{
  int v2; // edi
  unsigned int v3; // eax
  int v4; // ecx
  double v5; // st7
  float v6; // [esp+20h] [ebp-8h]

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 732))(this) )
  {
    if ( *((_DWORD *)this + 593) == dword_106E50A0 )
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416))(this, dword_106E5098);
    else
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 1416))(this, dword_106E5084);
  }
  if ( *((_DWORD *)this + 934) == -1
    || off_1061BE18[4 * ((_DWORD)this[934] & 0xFFF) + 2] != *((_DWORD *)this + 934) >> 12 )
  {
    v2 = 0;
  }
  else
  {
    v2 = off_1061BE18[4 * ((_DWORD)this[934] & 0xFFF) + 1];
  }
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  v6 = *(float *)(v2 + 588) - this[921];
  if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 25) )
    sub_1023C380(this, (int)"NPC_Barnacle.Digest", 0.0, 0);
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( this[147] - v6 <= 0.0 )
  {
    *((_BYTE *)this + 3677) = 0;
    v3 = *((_DWORD *)this + 934);
    if ( v3 == -1 || off_1061BE18[4 * ((_DWORD)this[934] & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * ((_DWORD)this[934] & 0xFFF) + 1];
    sub_100DD660(v4, &flt_106F1CA8);
    if ( 0.0 == (double)*((unsigned __int8 *)this + 9957) + *(float *)(dword_106B31C8 + 12) )
      v5 = 10.0;
    else
      v5 = 0.47999999;
    this[920] = v5;
  }
  if ( *(_DWORD *)(dword_106E511C + 48) )
    sub_103214C0((int)this);
}
