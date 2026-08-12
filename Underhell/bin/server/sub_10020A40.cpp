int __thiscall sub_10020A40(void *this)
{
  int result; // eax
  int v3; // esi
  __int16 v4; // ax
  int v5; // eax
  float v6; // [esp+0h] [ebp-14h]
  float v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  __int16 v9; // [esp+4h] [ebp-10h]
  float v10; // [esp+4h] [ebp-10h]

  result = sub_100CF460(this);
  v3 = result;
  if ( result )
  {
    v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)result + 1108))(result);
    v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 1108))(v3);
    sub_100B8C20(v6, v8);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1116))(v3);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1112))(v3);
    sub_100B8BE0(v4, v9);
    v10 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 1124))(v3);
    v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 1120))(v3);
    sub_100B8C00(v7, v10);
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1364))(this);
    if ( result )
    {
      v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1364))(this);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
    }
  }
  return result;
}
