int *__thiscall sub_100C6380(int *this, char a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // ebx
  int v6; // eax
  int v8; // [esp+8h] [ebp-4h]

  sub_100C6080(this + 5);
  v3 = this[4];
  this[3] = (int)&CManagedDataCacheClient<AsyncCaptionData_t,asynccaptionparams_t,AsyncCaptionData_t *>::`vftable';
  if ( v3 )
  {
    v4 = (_DWORD *)(**(int (__thiscall ***)(int))v3)(v3);
    v5 = v4;
    v8 = *v4;
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 4))(v3, 1);
    (*(void (__thiscall **)(_DWORD *, int))(v8 + 40))(v5, v6);
    this[4] = 0;
  }
  sub_100D3300((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
