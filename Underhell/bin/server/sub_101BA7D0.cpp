volatile signed __int32 *__cdecl sub_101BA7D0(int a1, int *a2, int *a3)
{
  int v3; // ebx
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v3 = a3[2];
  v4 = *a3;
  v5 = a3[1];
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v6 = (_DWORD *)sub_10184390(48);
  if ( !v6 )
    return sub_101B8390((signed __int32)&dword_106B9EC0, 0);
  v6[3] = 1;
  v6[5] = a1;
  v6[6] = v8;
  v6[7] = v9;
  v6[9] = v4;
  v6[10] = v5;
  *v6 = &CFunctor3<void (__cdecl *)(IPhysicsObject *,Vector const &,Vector const &),IPhysicsObject *,Vector,Vector,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  v6[2] = &CFunctor3<void (__cdecl *)(IPhysicsObject *,Vector const &,Vector const &),IPhysicsObject *,Vector,Vector,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  v6[4] = sub_101B51D0;
  v6[8] = v10;
  v6[11] = v3;
  return sub_101B8390((signed __int32)&dword_106B9EC0, (signed __int32)v6);
}
