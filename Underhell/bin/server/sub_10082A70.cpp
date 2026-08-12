char __thiscall sub_10082A70(float *this, unsigned __int8 a2)
{
  char *v3; // eax
  char *v4; // eax
  char result; // al
  char *v6; // eax
  char Buffer[256]; // [esp+8h] [ebp-200h] BYREF
  char v8[256]; // [esp+108h] [ebp-100h] BYREF

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v3 = sub_1001E280(Buffer, "CAI_Navigator::StopMoving( %d )\n", a2);
    v4 = sub_1001E280(v8, "[Nav] %s", v3);
    sub_10029660(*((_DWORD **)this + 1), (int)v4);
  }
  if ( sub_100A6180(*((_DWORD *)this + 9)) )
  {
    if ( a2 )
      return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 48))(this);
    result = sub_1007EBC0((int)this);
    if ( !result )
      return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 48))(this);
  }
  else
  {
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v6 = sub_1001E280(v8, "[Nav] %s", "CAI_Navigator::ClearGoal()\n");
      sub_10029660(*((_DWORD **)this + 1), (int)v6);
    }
    sub_100810C0(this);
    return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 44))(this);
  }
  return result;
}
