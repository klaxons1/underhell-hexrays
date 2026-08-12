int __thiscall sub_101208F0(void *this, int a2, int a3, _BYTE *a4)
{
  _BYTE *v4; // esi
  int result; // eax

  v4 = a4;
  if ( a4 && (sub_10227EE0(a4, ".wav") || sub_10227EE0(v4, ".mp3") || *v4 == 33) )
  {
    (*(void (__thiscall **)(int, int, int, _BYTE *))(*(_DWORD *)dword_10413194 + 28))(dword_10413194, a2, a3, v4);
    return (*(int (**)(void *, const char *, ...))(*(_DWORD *)this + 64))(
             this,
             "StopSound:  Raw wave stopped '%s' (ent %i)\n",
             v4,
             a2);
  }
  else
  {
    result = (*(unsigned __int16 (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_104131AC + 28))(dword_104131AC, v4);
    a4 = (_BYTE *)result;
    if ( (_WORD)result != 0xFFFF )
      return sub_10120830(this, a2, (int)v4, (__int16 *)&a4);
  }
  return result;
}
