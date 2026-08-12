_DWORD *__thiscall sub_1014C4D0(_DWORD *this, char a2)
{
  int v3; // ecx
  int (__thiscall *v4)(int); // edx
  int v5; // eax

  v3 = this[2570];
  *this = &CVoiceStatus::`vftable';
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
  v4 = *(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 140);
  dword_1043C8E4 = 0;
  v5 = v4(dword_1041315C);
  if ( v5 && *((_BYTE *)this + 10284) )
    sub_1014C0A0((int)(this + 10), (int)this, v5);
  sub_1014C300(this + 10);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
