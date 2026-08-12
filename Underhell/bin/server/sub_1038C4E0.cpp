float *__thiscall sub_1038C4E0(void *this, float *a2, int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  float *result; // eax
  int (__thiscall *v10)(void *); // edx
  int v11; // eax
  float v12; // edx
  float v13; // ecx
  int v14; // eax
  int (__thiscall *v15)(void *); // edx
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  float v23; // edx
  float v24; // ecx
  char v25[12]; // [esp+4h] [ebp-78h] BYREF
  int v26; // [esp+10h] [ebp-6Ch]
  int v27; // [esp+14h] [ebp-68h]
  int v28; // [esp+18h] [ebp-64h]
  float v29; // [esp+58h] [ebp-24h] BYREF
  float v30; // [esp+5Ch] [ebp-20h]
  float v31; // [esp+60h] [ebp-1Ch]
  float v32[3]; // [esp+64h] [ebp-18h] BYREF
  float v33; // [esp+70h] [ebp-Ch] BYREF
  float v34; // [esp+74h] [ebp-8h]
  float v35; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
  {
    if ( sub_1038A110(this) )
    {
      if ( (_BYTE)a4 )
      {
        v29 = 0.75;
        v30 = 0.75;
        v31 = 0.079999998;
        v33 = 0.25;
        v34 = 0.25;
        v35 = 0.079999998;
        v22 = sub_10388C50(this);
        sub_10111860(v22 + 320, &v33, &v29, v32);
      }
      else
      {
        v29 = 0.5;
        v30 = 0.5;
        v31 = 0.079999998;
        v21 = sub_10388C50(this);
        sub_101117D0(v21 + 320, &v29, v32);
      }
      result = a2;
      v23 = v32[1];
      *a2 = v32[0];
      v24 = v32[2];
      a2[1] = v23;
      a2[2] = v24;
    }
    else if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) + 447)
           || (*(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) + 256) & 1) == 0 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) + 447) == 3 )
      {
        v14 = sub_10388C50(this);
        (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v14 + 520))(v14, a2, a3, a4);
        return a2;
      }
      else
      {
        v15 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 368);
        v29 = 0.5;
        v30 = 0.5;
        v31 = 1.0;
        v16 = v15(this);
        sub_101117D0(v16 + 320, &v29, &v33);
        v17 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
        v18 = -sub_10023450(v17)[2];
        v29 = v33;
        v30 = v34;
        v31 = v18 - 80.0 + v35;
        sub_1002A5F0((int)&savedregs, (int)this, &v33, &v29, 16443, 0, 0, (int)v25);
        result = a2;
        v19 = v27;
        *(_DWORD *)a2 = v26;
        v20 = v28;
        *((_DWORD *)a2 + 1) = v19;
        *((_DWORD *)a2 + 2) = v20;
      }
    }
    else
    {
      v10 = *(int (__thiscall **)(void *))(*(_DWORD *)this + 368);
      v29 = 0.5;
      v30 = 0.5;
      v31 = 0.079999998;
      v11 = v10(this);
      sub_101117D0(v11 + 320, &v29, &v33);
      result = a2;
      v12 = v34;
      *a2 = v33;
      v13 = v35;
      a2[1] = v12;
      a2[2] = v13;
    }
  }
  else
  {
    v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    v7 = v6;
    if ( !v6
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6)
      || (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1096))(v7)) == 0 )
    {
      v8 = v7;
    }
    (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v8 + 520))(v8, a2, a3, a4);
    return a2;
  }
  return result;
}
