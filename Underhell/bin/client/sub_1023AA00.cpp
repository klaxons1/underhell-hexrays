_BYTE *__thiscall sub_1023AA00(int this)
{
  _BYTE *result; // eax

  result = (_BYTE *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 107);
  if ( (_BYTE)result )
  {
    result = *(_BYTE **)(this + 36);
    if ( *result )
    {
      if ( !result[1] )
      {
        sub_102393F0(&dword_103FCF4C, (int (__thiscall ***)(_DWORD))this);
        *(_BYTE *)(*(_DWORD *)(this + 36) + 2) = 0;
        *(_BYTE *)(*(_DWORD *)(this + 36) + 1) = 1;
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 28))(
          dword_1047CA68,
          *(_DWORD *)(this + 36) + 8,
          *(_DWORD *)(this + 36) + 12);
        *(_DWORD *)(*(_DWORD *)(this + 36) + 16) = *(_DWORD *)(*(_DWORD *)(this + 36) + 8);
        *(_DWORD *)(*(_DWORD *)(this + 36) + 20) = *(_DWORD *)(*(_DWORD *)(this + 36) + 12);
        return (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 676))(this);
      }
    }
  }
  return result;
}
