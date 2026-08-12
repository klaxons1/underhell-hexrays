int __thiscall sub_10276300(_DWORD *this, int a2, char a3)
{
  int v4; // ebx
  int *v5; // ecx
  int v6; // eax
  float *v7; // eax
  float *v8; // eax
  int v9; // eax
  float *v10; // edi
  float *v11; // eax
  int v12; // edx
  int v13; // eax
  float v15[3]; // [esp+28h] [ebp-4Ch] BYREF
  int v16[3]; // [esp+34h] [ebp-40h] BYREF
  float v17[3]; // [esp+40h] [ebp-34h] BYREF
  float v18; // [esp+4Ch] [ebp-28h] BYREF
  float v19; // [esp+50h] [ebp-24h]
  float v20; // [esp+54h] [ebp-20h]
  float v21; // [esp+58h] [ebp-1Ch] BYREF
  float v22; // [esp+5Ch] [ebp-18h]
  float v23; // [esp+60h] [ebp-14h]
  float v24[3]; // [esp+64h] [ebp-10h] BYREF
  int v25; // [esp+70h] [ebp-4h]

  v25 = sub_100D7680(a2);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this + 1132))(this, 3, 0.0);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 1116))(a2);
  v4 = this[300] - 1;
  if ( *((_BYTE *)this + 84) )
  {
    *((_BYTE *)this + 88) |= 1u;
  }
  else
  {
    v5 = (int *)this[6];
    if ( v5 )
      sub_100194B0(v5, 1200);
  }
  this[300] = v4;
  if ( a3 )
  {
    v6 = sub_100BEF30((int)this, "muzzle");
    sub_100BCCA0(this, v6, (int)&v21, (int)v16);
    sub_10422220(v16, &v18);
  }
  else
  {
    v7 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)a2 + 968))(a2, v16);
    v21 = *v7;
    v22 = v7[1];
    v23 = v7[2];
    v8 = (float *)(*(int (__thiscall **)(int, int *, float *))(*(_DWORD *)v25 + 2104))(v25, v16, &v21);
    v18 = *v8;
    v19 = v8[1];
    v20 = v8[2];
  }
  v24[0] = v18 * 1000.0;
  v17[0] = v21;
  v24[1] = v19 * 1000.0;
  v17[1] = v22;
  v24[2] = 1000.0 * v20;
  v17[2] = v23;
  sub_10422540(v24, v15);
  v9 = sub_100D1940(this);
  v10 = (float *)sub_100E3960((int)"grenade_ar2", v17, v15, v9);
  sub_100DD660((int)v10, v24);
  v11 = sub_1014AE30((float *)v16, -400.0, 400.0);
  sub_100D7260(v10, v11);
  sub_100E0970((int)v10, v12, 5, 1);
  v13 = sub_100D1940(this);
  sub_100F4E50((unsigned int *)v10, v13);
  return (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)v10 + 500))(v10, *(float *)(dword_106CFF44 + 44));
}
