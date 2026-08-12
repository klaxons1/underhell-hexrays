int __thiscall sub_10020570(_DWORD *this, const char *a2)
{
  const char *v2; // eax
  int v4; // edi
  const char *v5; // esi
  const char *v6; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  _BYTE v11[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  if ( !a2 )
    v2 = String;
  v4 = sub_100C9780(v2);
  if ( v4 )
  {
    if ( sub_100CF460(this) )
    {
      v8 = *this;
      v9 = sub_100CF460(this);
      (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(v8 + 960))(this, v9, 0, 0);
    }
    if ( this[65] )
    {
      v10 = sub_1025F440("%s_weapon", this[65]);
      *(_DWORD *)(v4 + 260) = *(_DWORD *)sub_10162BE0(v11, v10);
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this + 952))(this, v4);
    return (*(int (__thiscall **)(_DWORD *, int))(*this + 2020))(this, v4);
  }
  else
  {
    v5 = (const char *)this[65];
    if ( !v5 )
      v5 = String;
    v6 = a2;
    if ( !a2 )
      v6 = String;
    return Warning("Couldn't create weapon %s to give NPC %s.\n", v6, v5);
  }
}
