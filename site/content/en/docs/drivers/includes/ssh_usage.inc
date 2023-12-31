## Requirements

A Linux VM with the following:

* systemd or OpenRC
* a container runtime, such as Docker or CRIO
* [cri-dockerd](https://github.com/Mirantis/cri-dockerd) (if using Kubernetes +v1.24 & `docker` container-runtime)

This VM must also meet the [kubeadm requirements](https://kubernetes.io/docs/setup/production-environment/tools/kubeadm/install-kubeadm/), such as:

* 2 CPU's
* 2GB RAM
* iptables (in legacy mode)
* conntrack
* crictl
* cni-plugins
* SELinux permissive
* cgroups v1 (v2 is not yet supported by Kubernetes)

## Usage

The ssh driver requires the IP address of the VM to use.

```shell
minikube start --driver=ssh --ssh-ip-address=vm.example.com
```

