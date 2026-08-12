int __thiscall sub_101693B0(int this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  char *v5; // ebx
  int v6; // esi

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      v3 = *(_DWORD *)(this + 28);
      if ( v3 && (v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, v3)) != 0 )
        v5 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v4);
      else
        v5 = (char *)Locale;
      if ( sub_10229D00(32) )
        v6 = sub_10229D20("TempEntity");
      else
        v6 = 0;
      sub_1022ACA0("te", 19);
      sub_1022ABA0("name", "TE_Explosion");
      sub_1022ACC0("time", *((float *)off_103DC81C + 3));
      sub_1022ACC0("originx", *(float *)(this + 16));
      sub_1022ACC0("originy", *(float *)(this + 20));
      sub_1022ACC0("originz", *(float *)(this + 24));
      sub_1022ACC0("directionx", *(float *)(this + 44));
      sub_1022ACC0("directiony", *(float *)(this + 48));
      sub_1022ACC0("directionz", *(float *)(this + 52));
      sub_1022ABA0("model", v5);
      sub_1022ACC0("scale", *(float *)(this + 32));
      sub_1022ACA0("framerate", *(_DWORD *)(this + 36));
      sub_1022ACA0("flags", *(_DWORD *)(this + 40));
      sub_1022ACA0("materialtype", *(char *)(this + 56));
      sub_1022ACA0("radius", *(_DWORD *)(this + 60));
      sub_1022ACA0("magnitude", *(_DWORD *)(this + 64));
      sub_101BC9C0(0, v6);
      return sub_1022AF00(v6);
    }
  }
  return result;
}
