int __thiscall sub_10120830(void *this, int a2, int a3, __int16 *a4)
{
  int result; // eax
  _WORD *v5; // ebx
  int v6; // esi
  int v7; // edi
  _WORD *v8; // eax
  int v9; // edi
  int v11; // [esp+18h] [ebp+10h]

  if ( *a4 != -1
    || (result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131AC + 28))(dword_104131AC, a3),
        *a4 = result,
        (_WORD)result != 0xFFFF) )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_104131AC + 88))(*a4);
    v5 = (_WORD *)result;
    if ( result )
    {
      result = *(unsigned __int16 *)(result + 8);
      v6 = 0;
      v11 = result;
      if ( result )
      {
        do
        {
          v7 = *(_DWORD *)dword_104131AC;
          v8 = sub_101207A0(v5);
          v9 = (*(int (__thiscall **)(int, _WORD *))(v7 + 48))(dword_104131AC, &v8[2 * v6]);
          (*(void (__stdcall **)(int, _DWORD, int))(*(_DWORD *)dword_10413194 + 28))(a2, (unsigned __int16)v5[11], v9);
          result = (*(int (**)(void *, const char *, ...))(*(_DWORD *)this + 64))(
                     this,
                     "StopSound:  '%s' stopped as '%s' (ent %i)\n",
                     a3,
                     v9,
                     a2);
          ++v6;
        }
        while ( v6 < v11 );
      }
    }
  }
  return result;
}
