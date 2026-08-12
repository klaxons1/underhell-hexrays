volatile signed __int32 *__cdecl sub_101BA870(int a1, int *a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // eax

  v2 = a2[2];
  v3 = *a2;
  v4 = a2[1];
  v5 = (_DWORD *)sub_10184390(36);
  if ( !v5 )
    return sub_101B8390((signed __int32)&dword_106B9EC0, 0);
  v5[3] = 1;
  v5[6] = v3;
  v5[5] = a1;
  v5[7] = v4;
  *v5 = &CFunctor2<void (__cdecl *)(IPhysicsObject *,Vector const &),IPhysicsObject *,Vector,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  v5[2] = &CFunctor2<void (__cdecl *)(IPhysicsObject *,Vector const &),IPhysicsObject *,Vector,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>>::`vftable';
  v5[4] = sub_101B5200;
  v5[8] = v2;
  return sub_101B8390((signed __int32)&dword_106B9EC0, (signed __int32)v5);
}
