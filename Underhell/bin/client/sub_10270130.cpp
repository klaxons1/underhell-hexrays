int __thiscall sub_10270130(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  char v10; // al
  int (__thiscall ***v11)(void *, _BYTE *, int *); // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int (__thiscall ***v15)(void *, int, int); // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [esp+18h] [ebp-38h]
  int v22; // [esp+18h] [ebp-38h]
  int v23; // [esp+18h] [ebp-38h]
  int v24; // [esp+20h] [ebp-30h] BYREF
  int v25; // [esp+24h] [ebp-2Ch] BYREF
  int v26; // [esp+28h] [ebp-28h] BYREF
  int v27; // [esp+2Ch] [ebp-24h] BYREF
  int v28; // [esp+30h] [ebp-20h] BYREF
  int v29; // [esp+34h] [ebp-1Ch] BYREF
  int v30; // [esp+38h] [ebp-18h] BYREF
  int v31; // [esp+3Ch] [ebp-14h] BYREF
  int v32; // [esp+40h] [ebp-10h] BYREF
  int v33; // [esp+44h] [ebp-Ch] BYREF
  int v34; // [esp+48h] [ebp-8h] BYREF
  int v35; // [esp+4Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)this + 1012))(this, &v27, &v35, &v24, &v26);
  v24 += v27;
  v26 += v35;
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v28, (int)&v34);
  sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 432), (int)&v32, (int)&v33);
  (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 432) + 784))(*(_DWORD *)(this + 432), &v30, &v31);
  v2 = v30 + 10;
  if ( v32 > v30 + 10 )
    v2 = v32;
  v3 = v31 + 10;
  v30 = v2;
  if ( v33 > v31 + 10 )
    v3 = v33;
  v31 = v3;
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 432), v2, v3);
  v4 = *(_DWORD *)(this + 436);
  v25 = 0;
  v29 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4) )
  {
    sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 436), (int)&v32, (int)&v33);
    (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 436) + 784))(
      *(_DWORD *)(this + 436),
      &v25,
      &v29);
    v5 = v25 + 10;
    if ( v32 > v25 + 10 )
      v5 = v32;
    v6 = v29 + 10;
    v25 = v5;
    if ( v33 > v29 + 10 )
      v6 = v33;
    v29 = v6;
    sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 436), v5, v6);
  }
  v7 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 440));
  v8 = v28;
  if ( v28 <= v7 + 100 )
  {
    v8 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 440)) + 100;
    v28 = v8;
  }
  if ( v8 <= 2 * (v30 + v25) + 30 )
  {
    v8 = 2 * (v30 + v25) + 30;
    v28 = v8;
  }
  sub_102361A0((int (__thiscall ***)(void *, int, int))this, v8, v34);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v28, (int)&v34);
  v21 = v35 + 15;
  v9 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 440));
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 440), v27 + v24 / 2 - v9 / 2, v21);
  v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 436) + 128))(*(_DWORD *)(this + 436));
  v11 = *(int (__thiscall ****)(void *, _BYTE *, int *))(this + 432);
  if ( v10 )
  {
    v16 = sub_102374F0(v11);
    v23 = v26 - v16 - 15;
    v17 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 432));
    sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 432), v27 + v24 / 4 - v17 / 2, v23);
    v18 = sub_102374F0(*(int (__thiscall ****)(void *, _BYTE *, int *))(this + 432));
    v22 = v26 - v18 - 15;
    v19 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 432));
    v14 = 3 * v24 / 4 - v19 / 2;
    v15 = *(int (__thiscall ****)(void *, int, int))(this + 436);
  }
  else
  {
    v12 = sub_102374F0(v11);
    v22 = v26 - v12 - 15;
    v13 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 432));
    v14 = v24 / 2 - v13 / 2;
    v15 = *(int (__thiscall ****)(void *, int, int))(this + 432);
  }
  sub_10236140(v15, v27 + v14, v22);
  sub_1024DDC0(this);
  return sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v28, (int)&v34);
}
