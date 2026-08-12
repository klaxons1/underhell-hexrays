_DWORD *__thiscall sub_1027C1B0(int this, int *a2, _DWORD *a3)
{
  _DWORD *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 304))(this) )
  {
    if ( *(_BYTE *)(this + 353) )
    {
      sub_1027BE70((int *)this);
      *(_BYTE *)(this + 353) = 0;
    }
    sub_1027A660(this, (int *)(this + 336));
  }
  *a2 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  result = a3;
  *a3 = *(_DWORD *)(this + 336);
  return result;
}
