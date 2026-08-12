void __thiscall sub_10307160(_DWORD *this, _DWORD *a2)
{
  int v2; // ebx
  __int64 v4; // [esp-8h] [ebp-18h]

  v2 = a2[106];
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2)
    || (char *)a2[23] == "npc_vortigaunt"
    || sub_100D6240(a2, "npc_vortigaunt")
    || v2 && ((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2) & 0x100) != 0 )
  {
    HIDWORD(v4) = a2;
    LODWORD(v4) = a2;
    sub_1010DD80(this + 287, v4, 0.0);
    sub_10306B20((int)this, (int)a2, 1, 1);
  }
}
