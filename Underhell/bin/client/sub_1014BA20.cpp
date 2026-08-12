int __thiscall sub_1014BA20(int this)
{
  float *v2; // edi
  float *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v7; // [esp+20h] [ebp-8h]
  int v8; // [esp+24h] [ebp-4h]

  v2 = (float *)(this + 64);
  v3 = (float *)(this + 52);
  v7 = dword_103E7E94;
  sub_10144510((float *)(this + 52), (float *)(this + 64), 3);
  v8 = *(_DWORD *)(dword_1043BDB4 + 48);
  sub_10229140(&unk_1043BDB0, 0);
  sub_1014B3A0(
    (_DWORD *)this,
    (int)v2,
    *(float *)(this - 12),
    *(_DWORD *)(this + 132),
    COERCE_INT(0.0),
    *(_DWORD *)(this - 24));
  sub_10149570();
  sub_1014B480((int *)this, *(float *)(this - 12), 3, 0.0);
  sub_10229140(&unk_1043BDB0, v8 != 0);
  sub_10144510(v3, v2, v7);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v5 = v4;
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 16))(v5, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
