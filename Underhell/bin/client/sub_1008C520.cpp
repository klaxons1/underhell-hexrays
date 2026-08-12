__int16 __thiscall sub_1008C520(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  v4 = (unsigned __int16)sub_1008C300(this, a2, a3 & 0xFFFFFFDC | 0x22);
  v5 = sub_1007A730(off_103DCD78, a2);
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 108))(v5, 1);
  (*(void (__thiscall **)(int *, int, int))(*this + 92))(this, v4, 1);
  return v4;
}
