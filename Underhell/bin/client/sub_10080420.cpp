int __thiscall sub_10080420(int this, int a2, int a3)
{
  int result; // eax
  int v5; // ebx
  int v6; // edi

  sub_1007F3E0(this + 104, a2, a3);
  result = *(_DWORD *)(this + 32) + 36 * (unsigned __int16)a3;
  if ( (*(_BYTE *)(result + 24) & 0xE) != 0 )
  {
    result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)result + 92))(*(_DWORD *)result, 3);
    if ( (_BYTE)result )
    {
      for ( result = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 260))(a2);
            (_WORD)result != 0xFFFF;
            result = *(unsigned __int16 *)(v5 + *(_DWORD *)(this + 184) + 6) )
      {
        v5 = 8 * (unsigned __int16)result;
        v6 = *(_DWORD *)(this + 68) + 16 * *(unsigned __int16 *)(v5 + *(_DWORD *)(this + 184));
        if ( *(_DWORD *)(v6 + 4) != *(_DWORD *)(this + 388) )
        {
          sub_10080190((_DWORD *)this, a3, *(unsigned __int16 *)(v5 + *(_DWORD *)(this + 184)));
          *(_DWORD *)(v6 + 4) = *(_DWORD *)(this + 388);
        }
      }
    }
  }
  return result;
}
