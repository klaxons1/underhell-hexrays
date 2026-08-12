char __thiscall sub_100CCAF0(_BYTE *this, int a2)
{
  char v3; // bl
  bool v4; // zf
  _BYTE v6[4]; // [esp+Ch] [ebp-8h] BYREF
  int v7; // [esp+10h] [ebp-4h]

  v3 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1032))(this) )
  {
    sub_1042CBA0("violence_hgibs");
    if ( !(unsigned __int8)sub_1042C850(v6) )
      goto LABEL_9;
    v4 = *(_DWORD *)(v7 + 48) == 0;
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1036))(this) )
      goto LABEL_9;
    sub_1042CBA0("violence_agibs");
    if ( !(unsigned __int8)sub_1042C850(v6) )
      goto LABEL_9;
    v4 = *(_DWORD *)(v7 + 48) == 0;
  }
  if ( v4 )
    v3 = 1;
LABEL_9:
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    this[225] = 0;
  }
  sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
  if ( this[224] != 2 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 472))(this, this + 224);
    this[224] = 2;
  }
  if ( v3 )
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1028))(this);
    return 0;
  }
  else
  {
    sub_100EAB80(this, 32);
    return (*(int (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 1024))(this, a2);
  }
}
