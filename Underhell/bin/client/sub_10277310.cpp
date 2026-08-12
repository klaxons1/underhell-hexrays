void __thiscall sub_10277310(_BYTE *this)
{
  int (__thiscall *v2)(_BYTE *); // edx
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  nullsub_4();
  if ( this[969] )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80) - *((_DWORD *)this + 243) > 500 )
    {
      v2 = **(int (__thiscall ***)(_BYTE *))this;
      this[969] = 0;
      this[970] = 0;
      v3 = dword_1047CA74;
      v4 = *(_DWORD *)dword_1047CA74;
      v5 = v2(this);
      (*(void (__thiscall **)(int, int))(v4 + 76))(v3, v5);
      sub_102739B0((int)this);
    }
  }
}
