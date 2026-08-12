int __thiscall sub_10255440(unsigned __int16 *this)
{
  int v2; // edx
  const char *v3; // eax
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  sub_10112C00((int)(this + 160), 6);
  sub_101129A0(this + 160, this[178] | 4);
  sub_100E0970((int)this, v2, 0, 0);
  v3 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 28))(this, v5);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, v3);
  if ( !*(_DWORD *)(dword_106C76A4 + 48) )
    sub_100EAB80(this, 32);
  return (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 584))(this);
}
