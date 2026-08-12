void __thiscall sub_101A36E0(char *this, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  float *v6; // eax

  if ( (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this)
    && (*((_DWORD *)this + 986) == -1
     || off_1061BE18[4 * (*((_DWORD *)this + 986) & 0xFFF) + 2] != *((_DWORD *)this + 986) >> 12
     || !off_1061BE18[4 * (*((_DWORD *)this + 986) & 0xFFF) + 1])
    && *(float *)(dword_106B31C8 + 12) >= (double)*((float *)this + 973) )
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 368))(this);
    v4 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 368))(this);
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    *((_DWORD *)this + 986) = -1;
    if ( (unsigned __int8)sub_103E0CF0(0) )
    {
      sub_10023CB0(this, 76);
      v5 = sub_1026A890(this + 3944);
      v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
      *((float *)this + 976) = *v6;
      *((float *)this + 977) = v6[1];
      *((float *)this + 978) = v6[2];
    }
    *((float *)this + 973) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
}
