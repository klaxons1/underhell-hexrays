int __thiscall sub_101E9580(void *this, int a2, float *a3, char a4, float *a5)
{
  _DWORD *v6; // esi
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  int *v11; // ecx
  int v12; // ecx
  int result; // eax
  double v14; // st7
  int v15; // edi
  float v16; // [esp+8h] [ebp-24h]
  float v17[3]; // [esp+14h] [ebp-18h] BYREF
  float v18; // [esp+20h] [ebp-Ch] BYREF
  float v19; // [esp+24h] [ebp-8h]
  float v20; // [esp+28h] [ebp-4h]

  v6 = (_DWORD *)sub_101811E0("prop_physics", -1);
  (*(void (__thiscall **)(_DWORD *, const char *))(*v6 + 104))(v6, "models/PG_props/pg_obj/pg_flare.mdl");
  if ( !a4 )
    a5 = (float *)(*(int (__thiscall **)(void *, float *))(*(_DWORD *)this + 968))(this, v17);
  sub_100E0D20((int)v6, a5);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_100E0EA0((int)v6, (float *)this + 176);
  (*(void (__thiscall **)(_DWORD *))(*v6 + 96))(v6);
  v16 = *((float *)this + 532) + 90.0 - *(float *)(dword_106B31C8 + 12);
  sub_1020F790((int)v6, v16);
  v8 = *((_DWORD *)this + 1007);
  if ( v8 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 1007) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*((_DWORD *)this + 1007) & 0xFFF) + 1];
  v10 = *(_DWORD *)(v9 + 312);
  if ( v10 == -1 || (v11 = &off_1061BE18[4 * (*(_DWORD *)(v9 + 312) & 0xFFF) + 1], v11[1] != v10 >> 12) )
    v12 = 0;
  else
    v12 = *v11;
  sub_1025FAC0(v12);
  result = (int)a3;
  if ( a3 )
  {
    v18 = *a3;
    v19 = a3[1];
    v20 = a3[2];
    off_10689714();
    v14 = *(float *)(dword_106BBDB4 + 44);
    v18 = v18 * v14;
    v19 = v19 * v14;
    v20 = v14 * v20;
    v15 = v6[106];
    sub_100EBE30((int)v6, 3);
    v17[0] = 200.0;
    v17[1] = 200.0;
    v17[2] = 200.0;
    return (*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v15 + 208))(v15, &v18, v17);
  }
  return result;
}
