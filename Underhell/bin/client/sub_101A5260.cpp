int __userpurge sub_101A5260@<eax>(int *a1@<ecx>, float *a2@<esi>, int a3)
{
  int v4; // esi
  int *v5; // ebx
  double v6; // st7
  int v7; // edx
  int v8; // eax
  float *v9; // eax
  int v10; // edx
  double v11; // st7
  int (__thiscall *v12)(int *); // eax
  float *v13; // eax
  float v15; // [esp+2Ch] [ebp-3Ch]
  float v16; // [esp+30h] [ebp-38h]
  int v17[3]; // [esp+44h] [ebp-24h] BYREF
  float v18; // [esp+50h] [ebp-18h]
  float v19; // [esp+54h] [ebp-14h]
  float v20; // [esp+58h] [ebp-10h]
  float v21; // [esp+5Ch] [ebp-Ch]
  float v22; // [esp+60h] [ebp-8h]
  float v23; // [esp+64h] [ebp-4h]
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  sub_101A4C60(a1 - 1, (int)&savedregs, (int)a1, a2);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 16))(v4, 0);
  sub_100ECE60((int)a1);
  v5 = (int *)(*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
                dword_1047C96C,
                "effects/strider_pinch_dudv",
                "ClientEffect textures",
                1,
                0);
  v23 = sub_100A4EE0((int)(a1 + 15), *((float *)off_103DC81C + 3));
  v6 = sub_100A4EE0((int)(a1 + 10), *((float *)off_103DC81C + 3));
  v7 = *v5;
  v21 = v6;
  v8 = (*(int (__thiscall **)(int *, const char *, _DWORD, int))(v7 + 44))(v5, "$refractamount", 0, 1);
  (*(void (__thiscall **)(int, float))(*(_DWORD *)v8 + 12))(v8, COERCE_FLOAT(LODWORD(v23)));
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v4 + 36))(v4, v5, a1 != (int *)4 ? a1 : 0);
  v23 = *((float *)off_103DC81C + 3) * 10.0;
  v22 = sin(*((float *)off_103DC81C + 3));
  v9 = sub_101422E0();
  v10 = *a1;
  v18 = *v9 * 128.0;
  v19 = v9[1] * 128.0;
  v11 = 128.0 * v9[2];
  v12 = *(int (__thiscall **)(int *))(v10 + 4);
  v20 = v11;
  v13 = (float *)v12(a1);
  *(float *)v17 = *v13 + v18;
  *(float *)&v17[1] = v13[1] + v19;
  *(float *)&v17[2] = v13[2] + v20;
  v16 = sin(v23) * v22 * 32.0 + v21;
  v15 = v21 + v22 * v22 * 32.0;
  sub_10199640((int)v5, (int)a1, v4, (float *)v17, v15, v16, *(float *)&dword_103EC8F0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return 1;
}
