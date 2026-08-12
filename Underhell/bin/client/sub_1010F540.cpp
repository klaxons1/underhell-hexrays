int __thiscall sub_1010F540(int this)
{
  int result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  const char *v10; // eax

  result = sub_10030540(this);
  v3 = result;
  if ( !*(_DWORD *)(this + 2624) )
  {
    v4 = *(_DWORD *)dword_10413178;
    v5 = sub_10034480((__int16 *)this);
    v6 = (*(int (__thiscall **)(int, int))(v4 + 16))(dword_10413178, v5);
    if ( v6 )
    {
      *(_DWORD *)(this + 2624) = sub_10114A30(this + 2628, v3, v6);
    }
    else
    {
      v7 = *(_DWORD *)dword_10413178;
      v8 = sub_10034480((__int16 *)this);
      v9 = (*(int (__thiscall **)(int, int))(v7 + 4))(dword_10413178, v8);
      v10 = (const char *)(*(int (__thiscall **)(int, int))(v7 + 12))(dword_10413178, v9);
      if ( !v10 )
        v10 = "<null>";
      Msg("*** ERROR: C_ServerRagdoll::InitModel: %s missing vcollide data ***\n", v10);
      *(_DWORD *)(this + 2624) = 0;
    }
    sub_1010EC10((unsigned __int8 *)(this + 2536), *(_DWORD *)(this + 2624));
    sub_1010EC10((unsigned __int8 *)(this + 2580), *(_DWORD *)(this + 2624));
    return v3;
  }
  return result;
}
