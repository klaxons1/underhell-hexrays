int __thiscall sub_1007EB60(void *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *((_DWORD *)this + 10);
  *((float *)this + 11) = -1.0;
  sub_100B9C50(v2);
  result = **((_DWORD **)this + 9);
  if ( result )
  {
    result = *(_DWORD *)(result + 36);
    if ( result == 3 || result == 1 || *(_DWORD *)(dword_10693584 + 48) )
    {
      result = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 84))(this, *((_DWORD *)this + 10));
      if ( (_BYTE)result )
      {
        result = dword_106B31C8;
        *((float *)this + 11) = *(float *)(dword_106B31C8 + 12);
      }
    }
  }
  return result;
}
