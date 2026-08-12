void __thiscall sub_1025E3D0(_DWORD *this, const char *ArgList, int a3)
{
  int v3; // ebx
  void (__thiscall **v5)(void *, int); // esi
  int v6; // eax
  char Buffer[512]; // [esp+Ch] [ebp-200h] BYREF

  v3 = 1;
  for ( this[58] = 0; v3 <= a3; ++v3 )
  {
    sub_10228370(Buffer, 0x200u, "%s%d", ArgList, v3);
    v5 = (void (__thiscall **)(void *, int))(*this + 768);
    v6 = (*(int (__stdcall **)(char *, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
           Buffer,
           *((unsigned __int8 *)this + 245));
    (*v5)(this, v6);
  }
}
