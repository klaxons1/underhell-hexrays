void __thiscall sub_10282990(int this)
{
  int (__thiscall ***v2)(void *, int *, int *); // eax
  int (__thiscall ***v3)(void *, int, int); // edi
  int v4; // [esp+4h] [ebp-110h] BYREF
  int v5; // [esp+8h] [ebp-10Ch] BYREF
  int v6; // [esp+Ch] [ebp-108h] BYREF
  int v7; // [esp+10h] [ebp-104h] BYREF
  char Source[256]; // [esp+14h] [ebp-100h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68);
  v2 = (int (__thiscall ***)(void *, int *, int *))(*(int (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 456)
                                                                                               + 36))(
                                                     *(_DWORD *)(this + 456),
                                                     &v4,
                                                     &v5);
  sub_10236F60(v2, &v6, &v7);
  v3 = (int (__thiscall ***)(void *, int, int))sub_10281EA0(this, this + 516, v6, v7);
  if ( v3 )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int, int), _DWORD))(*v3)[84])(v3, *(_DWORD *)(this + 512));
    sub_10236140(v3, v6, v7);
    sub_102807F0(*(_DWORD **)(this + 456), Source, 0xFFu, (int)v3);
    sub_10236070(v3, Source);
  }
}
