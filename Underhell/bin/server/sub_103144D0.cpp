int __thiscall sub_103144D0(void *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  float *v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // ecx
  int v14; // ecx
  _DWORD v16[256]; // [esp+Ch] [ebp-434h] BYREF
  _DWORD v17[5]; // [esp+40Ch] [ebp-34h] BYREF
  float v18[3]; // [esp+420h] [ebp-20h] BYREF
  float v19[3]; // [esp+42Ch] [ebp-14h] BYREF
  int v20; // [esp+438h] [ebp-8h]
  int v21; // [esp+43Ch] [ebp-4h]

  v4 = 0;
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  v19[0] = *v6 + 150.0;
  v19[1] = v6[1] + 150.0;
  v19[2] = v6[2] + 150.0;
  v18[0] = *v6 - 150.0;
  v18[1] = v6[1] - 150.0;
  v18[2] = v6[2] - 150.0;
  sub_1025F990(v17, (int)v16, 256, 0);
  v7 = 0;
  v20 = sub_1025F9C0((int)v18, (int)v19, (int)v17);
  v21 = 0;
  if ( v20 > 0 )
  {
    do
    {
      if ( !v16[v7] )
        goto LABEL_19;
      if ( v4 >= a2 )
        return v4;
      v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
      if ( v8 )
      {
        v9 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
        {
          v10 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
          v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 1096))(v10);
        }
        else
        {
          v8 = 0;
        }
      }
      if ( v16[v7] == v8 )
        goto LABEL_19;
      v11 = v16[v7];
      if ( v11 != (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
      {
        if ( *(char **)(v11 + 92) == "prop_dynamic" || sub_100D6240((_DWORD *)v11, "prop_dynamic") )
        {
LABEL_16:
          v12 = v21;
LABEL_17:
          *(_DWORD *)(a3 + 4 * v4++) = v16[v12];
          goto LABEL_18;
        }
        v12 = v21;
        v13 = v16[v21];
        if ( *(char **)(v13 + 92) == "prop_physics" )
          goto LABEL_17;
        if ( sub_100D6240((_DWORD *)v13, "prop_physics") )
          goto LABEL_17;
        v14 = v16[v12];
        if ( *(char **)(v14 + 92) == "physics_prop" )
          goto LABEL_17;
        if ( sub_100D6240((_DWORD *)v14, "physics_prop") )
          goto LABEL_16;
      }
LABEL_18:
      v7 = v21;
LABEL_19:
      v21 = ++v7;
    }
    while ( v7 < v20 );
  }
  return v4;
}
