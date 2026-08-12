char __thiscall sub_103D2590(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  int v5; // ebx
  float *v6; // eax
  float *v7; // [esp-18h] [ebp-80h]
  int v8; // [esp-10h] [ebp-78h]
  _BYTE v9[44]; // [esp+8h] [ebp-60h] BYREF
  float v10; // [esp+34h] [ebp-34h]
  _DWORD *v11; // [esp+54h] [ebp-14h]
  _BYTE v12[12]; // [esp+5Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 264))(a2)
    || (a2[64] & 0x20) != 0
    || (char *)a2[23] == "npc_strider"
    || sub_100D6240(a2, "npc_strider") )
  {
    return 0;
  }
  if ( sub_103D2000(this) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2)
      || a2[23] == *(_DWORD *)(sub_10019B00(this) + 92) )
    {
      return 0;
    }
  }
  else
  {
    if ( sub_10019B00(this) )
    {
      v4 = sub_10019B00(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) == 1
          || (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) == 2
          || (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) == 3 )
        {
          return 0;
        }
      }
    }
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 284))(a2) )
      return 0;
    if ( (*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) == 6 )
      return 0;
    v5 = *a2;
    v8 = (*(int (__thiscall **)(_DWORD *, int, int, _DWORD *))(*this + 576))(this, 1, 33570827, this);
    v7 = (float *)(*(int (__thiscall **)(_DWORD *))(v5 + 520))(a2);
    v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
    sub_1002A5F0((int)&savedregs, (int)a2, v6, v7, (int)v12, v8, 0, (int)v9);
    if ( v10 < 1.0 && v11 != a2 )
      return 0;
  }
  return 1;
}
