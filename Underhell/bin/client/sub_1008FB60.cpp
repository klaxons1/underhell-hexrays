void __thiscall sub_1008FB60(int *this, __int16 a2)
{
  _WORD *v3; // esi
  int v4; // edi
  int v5; // eax
  unsigned __int16 v6; // ax
  __int16 v7; // [esp+Ch] [ebp-4h]

  v3 = this + 9;
  v4 = *((unsigned __int16 *)this + 18);
  v7 = *((_WORD *)this + 18);
  if ( a2 != v7 )
  {
    (*(void (__thiscall **)(int *, int *))(*this + 72))(this, this + 9);
    *v3 = a2;
  }
  v5 = (unsigned __int16)*v3;
  if ( v4 != v5 )
  {
    if ( (((unsigned __int8)v4 ^ (unsigned __int8)v5) & 0xC0) != 0 )
    {
      *(_DWORD *)(this[1] + 312) |= 0x4000u;
      sub_1008F420(this);
      v4 = *(_DWORD *)off_103DD080;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 4) + 28))(this[1] + 4);
      (*(void (__thiscall **)(void *, _DWORD))(v4 + 140))(off_103DD080, v6);
      LOBYTE(v4) = v7;
    }
    if ( (((unsigned __int8)v4 ^ (unsigned __int8)*v3) & 0xC) != 0 )
      sub_1000ECD0((_DWORD *)this[1]);
  }
}
