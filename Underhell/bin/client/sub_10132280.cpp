int sub_10132280()
{
  int v0; // eax
  int v1; // eax

  v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 112))(dword_1041315C);
  LOBYTE(v0) = (_BYTE)v0
            && (v0 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C), !(_BYTE)v0);
  ((void (__thiscall *)(int (__stdcall ***)(int), int))(*off_103E753C)[2])(off_103E753C, v0);
  v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041317C + 8))(dword_1041317C);
  if ( (_BYTE)v1
    || !*(_DWORD *)(dword_10439654 + 48)
    || (v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 312))(dword_1041315C), !(_BYTE)v1)
    || (v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 316))(dword_1041315C), (_BYTE)v1)
    || (v1 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C), (_BYTE)v1) )
  {
    LOBYTE(v1) = 0;
    return ((int (__thiscall *)(int (__stdcall ***)(int), int))(*off_103E753C)[3])(off_103E753C, v1);
  }
  else
  {
    LOBYTE(v1) = 1;
    return ((int (__thiscall *)(int (__stdcall ***)(int), int))(*off_103E753C)[3])(off_103E753C, v1);
  }
}
