int __thiscall sub_103F8EE0(void *this, int *a2)
{
  const char *v4; // esi
  int v6[3]; // [esp+24h] [ebp-48h] BYREF
  float v7[3]; // [esp+30h] [ebp-3Ch] BYREF
  int v8[3]; // [esp+3Ch] [ebp-30h] BYREF
  float v9[3]; // [esp+48h] [ebp-24h] BYREF
  float v10; // [esp+54h] [ebp-18h] BYREF
  float v11; // [esp+58h] [ebp-14h]
  float v12; // [esp+5Ch] [ebp-10h]
  int v13; // [esp+60h] [ebp-Ch] BYREF
  float v14; // [esp+64h] [ebp-8h]
  float v15; // [esp+68h] [ebp-4h]
  int v16; // [esp+74h] [ebp+8h]

  (*(void (__thiscall **)(int *, float *))(*a2 + 504))(a2, v9);
  sub_100F5A30(a2, (int)&v10, (int)v7, 0);
  *(float *)v8 = v7[0] * 8.0 + v10 * 18.0 + v9[0];
  *(float *)&v8[1] = v7[1] * 8.0 + v11 * 18.0 + v9[1];
  *(float *)&v8[2] = v7[2] * 8.0 + 18.0 * v12 + v9[2] - 8.0;
  sub_103F8CE0((int)this, a2, v9, (float *)v8);
  (*(void (__thiscall **)(int *, int *, _DWORD))(*a2 + 540))(a2, &v13, 0);
  *(float *)&v13 = v10 * 350.0 + *(float *)&v13;
  v14 = v11 * 350.0 + v14;
  v15 = 350.0 * v12 + 50.0 + v15;
  v16 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -600, 600);
  *(float *)v6 = 200.0;
  *(float *)&v6[1] = (float)v16;
  *(float *)&v6[2] = 0.0;
  sub_102D5F00((float *)v8, &flt_106F1CB4, (int)&v13, (int)v6, (int)a2, 3.0, 0);
  (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 1132))(this, 4, 0.0);
  ++*((_DWORD *)this + 343);
  *((_BYTE *)this + 1392) = 1;
  v4 = (const char *)*((_DWORD *)this + 23);
  if ( !v4 )
    v4 = String;
  return (*(int (__thiscall **)(int, int *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(off_10627F88, a2, 1, v4);
}
