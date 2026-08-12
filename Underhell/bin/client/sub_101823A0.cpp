int __thiscall sub_101823A0(_DWORD *this)
{
  int result; // eax
  char *v3; // eax

  sub_1023E950(this);
  result = this[119];
  if ( result != -1 )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047C974 + 44))(dword_1047C974, this[119]);
    if ( !(_BYTE)result )
    {
      this[119] = -1;
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_104453A8 + 8))(dword_104453A8, "scores");
      v3 = sub_1014D240();
      v3[36] = 0;
      __asm { jmp     edx }
    }
  }
  return result;
}
