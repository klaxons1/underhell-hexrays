unsigned int __thiscall sub_104284C0(int this, _DWORD *a2)
{
  void *v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+0h] [ebp-8h]
  int v9; // [esp+0h] [ebp-8h]
  int v10; // [esp+0h] [ebp-8h]
  int v11; // [esp+0h] [ebp-8h]
  int v12; // [esp+0h] [ebp-8h]

  v3 = (void *)sub_1044A890(a2);
  sub_10431100(v3);
  v4 = sub_1044A160(a2);
  sub_104332E0(v4, this + 520);
  sub_1044A530(this, dword_106FDAB4);
  if ( *(int *)(this + 4) < 0 )
    *(_DWORD *)(this + 4) = 0;
  if ( *(int *)(this + 544) < 1 )
    *(_DWORD *)(this + 544) = 1;
  v5 = dword_1068DD50 * *(_DWORD *)(this + 544);
  *(_DWORD *)(this + 544) = v5;
  if ( v5 >= 5000 )
    v5 = 5000;
  *(_DWORD *)(this + 544) = v5;
  if ( *(float *)(this + 452) > 0.0 )
    *(_QWORD *)(this + 24) |= 1LL << *(_DWORD *)(this + 460);
  sub_10427C90(this, (int)a2, this, "renderers", 0, a2, (int *)(this + 588), v7);
  sub_10427C90(this, (int)a2, this, "operators", 1, a2, (int *)(this + 568), v8);
  sub_10427C90(this, (int)a2, this, "initializers", 2, a2, (int *)(this + 608), v9);
  sub_10427C90(this, (int)a2, this, "emitters", 3, a2, (int *)(this + 628), v10);
  sub_10428350((int *)this, (int)a2);
  sub_10427C90(this, (int)a2, this, "forces", 5, a2, (int *)(this + 648), v11);
  sub_10427C90(this, (int)a2, this, "constraints", 6, a2, (int *)(this + 668), v12);
  return sub_10427A40((_DWORD *)this);
}
