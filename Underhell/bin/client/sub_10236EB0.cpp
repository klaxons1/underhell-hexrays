bool __thiscall sub_10236EB0(int (__thiscall ***this)(void *, int *, int *, int *, int *), int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v7; // [esp+14h] [ebp-10h] BYREF
  int v8; // [esp+18h] [ebp-Ch] BYREF
  int v9; // [esp+1Ch] [ebp-8h] BYREF
  int v10; // [esp+20h] [ebp-4h] BYREF

  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**this)(this, &v7, &v8, &v9, &v10);
  (*(void (__thiscall **)(int, int))(v4 + 44))(v3, v5);
  return a2 >= v7 && a3 >= v8 && a2 < v9 && a3 < v10;
}
